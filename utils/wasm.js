const importObj = {
    env: {
        'memory': new WebAssembly.Memory({initial: 256, maximum: 256}),
        '__memory_base': 0,
        'tableBase': 0,
        'table': new WebAssembly.Table({initial: 10, element: 'anyfunc'}),
        abort:alert
    }
};
 

export async function addModule(url,callback){
    // 直接使用  WebAssembly.instantiateStream的方式会报错，说是 debug.wasm 资源不是 application/wasm 格式s.
    fetch(url).then(response =>
        response.arrayBuffer()
    ).then(bytes => WebAssembly.instantiate(bytes,importObj)).then(results => {
        var instance = results.instance;
        // var add= instance.exports._add;  //注意这里导出的方法名前有下划线!!
        var module = instance.exports;
        callback(module);
    });
}
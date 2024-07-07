/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const transarr = [];
    for(let i=0;i<arr.length;i++){
     transarr[i]=fn(arr[i],i);
    }
    return transarr;
 };
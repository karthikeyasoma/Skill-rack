var CODE = `
`;



(function(){
    var editor_id = $(".ace_editor.ace_dark")[0].id;   
    var editor = ace.edit(editor_id);
    editor.$blockScrolling = Infinity;
    num1 = CODE.split(" ");
    editor.setValue("");
    for(var i=0;i<num1.length;i++){
      editor.insert(num1[i]+" ");
      var row = editor.session.getLength() - 1;
      var column = editor.session.getLine(row).length;
      editor.gotoLine(row + 1, column);
  }
})();


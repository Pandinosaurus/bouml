
#include "UmlRelation.h"
#include "Context.h"

void UmlRelation::change(Context & ctx) {
if (ctx.onRelation() && ctx.match_stereotype(stereotype())) {
  if (ctx.cpp()) {
    const QCString & c = cppDecl();
    
    if (!c.isEmpty() && ctx.match(c)) {
      if (!set_CppDecl(ctx.replace(c)))
	ctx.err();
    }
  }
  
  if (ctx.java()) {
    const QCString & c = javaDecl();
    
    if (!c.isEmpty() && ctx.match(c)) {
      if (!set_JavaDecl(ctx.replace(c)))
	ctx.err();
    }
  }
  
  if (ctx.php()) {
    const QCString & c = phpDecl();
    
    if (!c.isEmpty() && ctx.match(c)) {
      if (!set_PhpDecl(ctx.replace(c)))
	ctx.err();
    }
  }
  
  if (ctx.python()) {
    const QCString & c = pythonDecl();
    
    if (!c.isEmpty() && ctx.match(c)) {
      if (!set_PythonDecl(ctx.replace(c)))
	ctx.err();
    }
  }
  
  if (ctx.idl()) {
    const QCString & c = idlDecl();
    
    if (!c.isEmpty() && ctx.match(c)) {
      if (!set_IdlDecl(ctx.replace(c)))
	ctx.err();
    }
  }
}
}

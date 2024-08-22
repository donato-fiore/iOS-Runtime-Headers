// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTOPERATION_H
#define SUSCRIPTOPERATION_H

@class ISOperation, WebScriptObject;



@interface SUScriptOperation : ISOperation {
    id *_options;
    ISOperation *_wrappedOperation;
    WebScriptObject *_callbackFunction;
}




+(Class)postOperationClassForType:(id)arg0 ;
+(void)registerPostOperationClass:(Class)arg0 forType:(id)arg1 ;
-(id)_scriptOptions;
-(id)initWithOperation:(id)arg0 callback:(id)arg1 ;
-(id)initWithOperation:(id)arg0 options:(id)arg1 ;
-(id)initWithPostType:(id)arg0 options:(id)arg1 ;
-(void)_sendCompletionCallback;
-(void)dealloc;
-(void)run;
-(void)setScriptOptions:(id)arg0 ;


@end


#endif
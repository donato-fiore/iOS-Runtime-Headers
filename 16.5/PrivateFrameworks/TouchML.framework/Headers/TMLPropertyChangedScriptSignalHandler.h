// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLPROPERTYCHANGEDSCRIPTSIGNALHANDLER_H
#define TMLPROPERTYCHANGEDSCRIPTSIGNALHANDLER_H

@class NSString;
@protocol TMLBinder;


#import "TMLScriptSignalHandler.h"
#import "TMLBinding.h"

@interface TMLPropertyChangedScriptSignalHandler : TMLScriptSignalHandler <TMLBinder>

 {
    TMLBinding *_binding;
}


@property (readonly, nonatomic) NSInteger bindingOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFunctionName:(id)arg0 context:(id)arg1 binding:(id)arg2 ;
-(void)attach;
-(void)bindingValueChanged:(id)arg0 ;
-(void)detach;


@end


#endif
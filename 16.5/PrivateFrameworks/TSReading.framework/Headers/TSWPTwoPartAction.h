// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTWOPARTACTION_H
#define TSWPTWOPARTACTION_H


#import <Foundation/Foundation.h>


@interface TSWPTwoPartAction : NSObject {
    id *_startAction;
    id *_cancelAction;
    id *_finishAction;
}


@property BOOL performImmediately; // ivar: _performImmediately


// +(id)actionWithStartAction:(id)arg0 cancelAction:(unk)arg1 finishAction:(id)arg2  ;
// -(id)initWithStartAction:(id)arg0 cancelAction:(unk)arg1 finishAction:(id)arg2  ;
-(void)cancel;
-(void)dealloc;
-(void)performFinishAction;
-(void)performStartAction;


@end


#endif
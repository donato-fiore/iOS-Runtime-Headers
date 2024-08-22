// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOACTION_H
#define _UIOACTION_H

@class BSAction;


#import "_UIOActionOriginContext.h"

@interface _UIOAction : BSAction {
    _UIOActionOriginContext *_originContext;
}


@property (readonly, nonatomic) _UIOActionOriginContext *originContext;


-(BOOL)isPermitted;
-(id)initWithOriginContext:(id)arg0 info:(id)arg1 responder:(id)arg2 ;
-(void)performActionFromConnection:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMEVENT_H
#define DOMEVENT_H

@class NSString;
@protocol DOMEventTarget;


#import "DOMObject.h"

@interface DOMEvent : DOMObject

@property (readonly) BOOL bubbles;
@property BOOL cancelBubble;
@property (readonly) BOOL cancelable;
@property (readonly) NSObject<DOMEventTarget> *currentTarget;
@property (readonly) unsigned short eventPhase;
@property BOOL returnValue;
@property (readonly) NSObject<DOMEventTarget> *srcElement;
@property (readonly) NSObject<DOMEventTarget> *target;
@property (readonly) NSUInteger timeStamp;
@property (readonly, copy) NSString *type;


-(BOOL)composed;
-(BOOL)defaultPrevented;
-(BOOL)isTrusted;
-(void)dealloc;
-(void)initEvent:(id)arg0 ;
-(void)initEvent:(id)arg0 canBubbleArg:(BOOL)arg1 cancelableArg:(BOOL)arg2 ;
-(void)preventDefault;
-(void)stopImmediatePropagation;
-(void)stopPropagation;


@end


#endif
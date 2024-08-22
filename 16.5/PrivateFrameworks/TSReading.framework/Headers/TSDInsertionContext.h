// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDINSERTIONCONTEXT_H
#define TSDINSERTIONCONTEXT_H


#import <Foundation/Foundation.h>


@interface TSDInsertionContext : NSObject

@property (readonly, nonatomic) BOOL fromDragToInsertController;
@property (readonly, nonatomic) BOOL hasPreferredCenter;
@property (readonly, nonatomic) BOOL insertFloating;
@property (readonly, nonatomic) BOOL insertFromDrag;
@property (readonly, nonatomic) BOOL insertWillBeDiscarded;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) CGPoint preferredCenter;
@property (readonly, nonatomic, getter=isPreferredCenterRequired) BOOL preferredCenterRequired;
@property (readonly, nonatomic) BOOL shouldEndEditing;


+(id)dragInsertionContextWithPreferredCenter:(struct CGPoint )arg0 required:(BOOL)arg1 fromDragToInsertController:(BOOL)arg2 insertWillBeDiscarded:(BOOL)arg3 ;
+(id)dragInsertionContextWithPreferredCenter:(struct CGPoint )arg0 required:(BOOL)arg1 shouldEndEditing:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertWillBeDiscarded:(BOOL)arg4 ;
+(id)nonInteractiveFloatingInsertionContext;
+(id)nonInteractiveInsertionContext;
-(id)init;


@end


#endif
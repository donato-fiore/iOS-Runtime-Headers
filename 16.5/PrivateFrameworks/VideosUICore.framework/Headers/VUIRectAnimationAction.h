// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIRECTANIMATIONACTION_H
#define VUIRECTANIMATIONACTION_H

@class CABasicAnimation, NSString;
@protocol CAAction;

#import <Foundation/Foundation.h>


@interface VUIRectAnimationAction : NSObject <CAAction>



@property (retain, nonatomic) CABasicAnimation *animationToRun; // ivar: _animationToRun
@property (nonatomic) CGRect fromRect; // ivar: _fromRect
@property (retain, nonatomic) NSString *key; // ivar: _key


-(void)runActionForKey:(id)arg0 object:(id)arg1 arguments:(id)arg2 ;


@end


#endif
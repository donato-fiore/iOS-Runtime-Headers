// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTORYBOARDEMBEDSEGUETEMPLATE_H
#define UISTORYBOARDEMBEDSEGUETEMPLATE_H



#import "UIStoryboardSegueTemplate.h"
#import "UIView.h"

@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate

@property (retain, nonatomic) UIView *containerView; // ivar: _containerView


-(id)initWithCoder:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTORYBOARDSHOWSEGUETEMPLATE_H
#define UISTORYBOARDSHOWSEGUETEMPLATE_H

@class NSString;


#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboardShowSegueTemplate : UIStoryboardSegueTemplate

@property (copy, nonatomic) NSString *action; // ivar: _action


-(id)initWithCoder:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCLOOKUPBUTTON_H
#define VKCLOOKUPBUTTON_H

@protocol VKCLookupButtonDelegate;


#import "VKCTappableView.h"

@interface VKCLookupButton : VKCTappableView

@property (weak, nonatomic) NSObject<VKCLookupButtonDelegate> *delegate; // ivar: _delegate




@end


#endif
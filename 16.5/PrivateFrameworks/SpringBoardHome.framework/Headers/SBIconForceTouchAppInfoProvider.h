// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONFORCETOUCHAPPINFOPROVIDER_H
#define SBICONFORCETOUCHAPPINFOPROVIDER_H

@class NSString;
@protocol SBIconAccessoryInfoProvider;

#import <Foundation/Foundation.h>

#import "SBIconContinuityItem.h"

@interface SBIconForceTouchAppInfoProvider : NSObject <SBIconAccessoryInfoProvider>



@property (readonly, nonatomic) SBIconContinuityItem *continuityItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly) Class superclass;




@end


#endif
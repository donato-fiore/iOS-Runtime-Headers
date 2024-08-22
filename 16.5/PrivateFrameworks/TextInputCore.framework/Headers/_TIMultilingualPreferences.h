// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TIMULTILINGUALPREFERENCES_H
#define _TIMULTILINGUALPREFERENCES_H

@class NSString, NSArray;
@protocol TIMultilingualPreferenceProviding;

#import <Foundation/Foundation.h>

#import "TIInputMode.h"

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userEnabledInputModes;
@property (readonly, nonatomic) NSArray *userPreferredLanguages;


+(id)inputModesForIdentifiers:(id)arg0 ;


@end


#endif
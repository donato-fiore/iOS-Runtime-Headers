// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIMULTILINGUALPREFERENCEOVERRIDES_H
#define TIMULTILINGUALPREFERENCEOVERRIDES_H

@class NSString, TIInputMode, NSArray;
@protocol TIMultilingualPreferenceProviding;

#import <Foundation/Foundation.h>


@interface TIMultilingualPreferenceOverrides : NSObject <TIMultilingualPreferenceProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TIInputMode *preferredSecondaryInputMode; // ivar: _preferredSecondaryInputMode
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userEnabledInputModes; // ivar: _userEnabledInputModes
@property (readonly, nonatomic) NSArray *userPreferredLanguages; // ivar: _userPreferredLanguages


-(id)initWithPreferredSecondaryInputMode:(id)arg0 userEnabledInputModes:(id)arg1 userPreferredLanguages:(id)arg2 ;


@end


#endif
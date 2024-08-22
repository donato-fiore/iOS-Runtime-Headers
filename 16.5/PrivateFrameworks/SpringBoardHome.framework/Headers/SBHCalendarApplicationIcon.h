// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHCALENDARAPPLICATIONICON_H
#define SBHCALENDARAPPLICATIONICON_H

@protocol SBCalendarIconImageProviderDelegate;


#import "SBHApplicationIcon.h"
#import "SBCalendarIconImageProvider.h"

@interface SBHCalendarApplicationIcon : SBHApplicationIcon <SBCalendarIconImageProviderDelegate>



@property (readonly, nonatomic) SBCalendarIconImageProvider *imageProvider; // ivar: _imageProvider


+(BOOL)canGenerateIconsInBackground;
-(id)generateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)initWithLeafIdentifier:(id)arg0 applicationBundleID:(id)arg1 ;
-(id)unmaskedIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(void)_boldTextStatusDidChange:(id)arg0 ;
-(void)calendarIconImageProviderHasChanged:(id)arg0 ;
-(void)dealloc;
-(void)localeChanged;


@end


#endif
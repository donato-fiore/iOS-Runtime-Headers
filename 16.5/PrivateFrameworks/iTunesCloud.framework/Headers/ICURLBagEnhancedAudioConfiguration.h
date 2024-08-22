// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICURLBAGENHANCEDAUDIOCONFIGURATION_H
#define ICURLBAGENHANCEDAUDIOCONFIGURATION_H

@class NSDictionary, NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface ICURLBagEnhancedAudioConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *bagEnhancedAudioDictionary; // ivar: _bagEnhancedAudioDictionary
@property (readonly, copy, nonatomic) NSURL *certificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSArray *prefetchSKDs;


-(id)_urlForBagEnhancedAudioKey:(id)arg0 ;
-(id)initWithBagEnhancedAudioDictionary:(id)arg0 ;


@end


#endif
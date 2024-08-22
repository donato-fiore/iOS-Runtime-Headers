// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSPHONEMEMARKER_H
#define TTSPHONEMEMARKER_H

@class NSString;
@protocol TTSMarker;

#import <Foundation/Foundation.h>


@interface TTSPhonemeMarker : NSObject <TTSMarker>



@property (nonatomic) NSInteger alphabet; // ivar: _alphabet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger markType;
@property (retain, nonatomic) NSString *phoneme; // ivar: _phoneme
@property (readonly) Class superclass;




@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSWORDMARKER_H
#define TTSWORDMARKER_H

@class NSString;
@protocol TTSMarker;

#import <Foundation/Foundation.h>


@interface TTSWordMarker : NSObject <TTSMarker>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger markType;
@property (readonly) Class superclass;
@property (nonatomic) _NSRange wordRange; // ivar: _wordRange




@end


#endif
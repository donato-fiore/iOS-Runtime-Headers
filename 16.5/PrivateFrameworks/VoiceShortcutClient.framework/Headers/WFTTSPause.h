// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTTSPAUSE_H
#define WFTTSPAUSE_H

@class NSString, NSNumber;
@protocol WFTTSStringAnnotation, WFTTSStringComponent;

#import <Foundation/Foundation.h>


@interface WFTTSPause : NSObject <WFTTSStringAnnotation, WFTTSStringComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *seconds; // ivar: _seconds
@property (readonly) Class superclass;


+(id)parseAnnotationString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithSeconds:(CGFloat)arg0 ;


@end


#endif
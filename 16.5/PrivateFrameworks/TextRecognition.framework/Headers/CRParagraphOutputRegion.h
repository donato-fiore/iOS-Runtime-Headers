// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRPARAGRAPHOUTPUTREGION_H
#define CRPARAGRAPHOUTPUTREGION_H

@class NSString;
@protocol CROutputRegionLayoutContributing;


#import "CRCompositeOutputRegion.h"

@interface CRParagraphOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property BOOL useLineSeparatorAsJoiningDelimiter; // ivar: _useLineSeparatorAsJoiningDelimiter


+(id)paragraphWithLines:(id)arg0 confidence:(int)arg1 baselineAngle:(CGFloat)arg2 ;
+(id)paragraphsWithLines:(id)arg0 ;
-(BOOL)contributesToDocumentHierarchy;
-(NSUInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 copyChildren:(BOOL)arg1 copyCandidates:(BOOL)arg2 deepCopy:(BOOL)arg3 ;
-(id)joiningDelimiter;
-(id)layoutComponents;
-(id)regionsSuitableForDataDetectorOutput;


@end


#endif
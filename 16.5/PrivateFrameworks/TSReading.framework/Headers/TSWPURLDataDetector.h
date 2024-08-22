// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPURLDATADETECTOR_H
#define TSWPURLDATADETECTOR_H

@class NSString;
@protocol TSWPDataDetectorProtocol;

#import <Foundation/Foundation.h>


@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)detectorIdentifier;
+(id)newArrayByScanningString:(id)arg0 scanRange:(struct _NSRange )arg1 ;
+(id)newURLFromString:(id)arg0 ;
+(id)scanString:(id)arg0 scanRange:(struct _NSRange )arg1 ;
+(struct _NSRange )calculateScanRangeForString:(id)arg0 changedRange:(struct _NSRange )arg1 ;
+(struct _NSRange )expandValidRange:(struct _NSRange )arg0 inString:(id)arg1 ;
+(void)initURLCharacterSets;
+(void)setInvalidURLSchemes:(id)arg0 ;


@end


#endif
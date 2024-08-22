// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRPARAGRAPHOUTPUTREGIONGEOMETRYINFO_H
#define CRPARAGRAPHOUTPUTREGIONGEOMETRYINFO_H



#import "CROutputRegionGeometryInfo.h"

@interface CRParagraphOutputRegionGeometryInfo : CROutputRegionGeometryInfo

@property (readonly) CROutputRegionGeometryInfo *firstLine; // ivar: _firstLine
@property (readonly) BOOL isCenterJustified; // ivar: _isCenterJustified
@property (readonly) CROutputRegionGeometryInfo *lastLine; // ivar: _lastLine


-(id)initFromParagraphOutputRegion:(id)arg0 ;


@end


#endif
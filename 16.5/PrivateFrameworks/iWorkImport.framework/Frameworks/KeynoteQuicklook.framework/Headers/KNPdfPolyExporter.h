// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNPDFPOLYEXPORTER_H
#define KNPDFPOLYEXPORTER_H



#import "KNPdfExporter.h"

@interface KNPdfPolyExporter : KNPdfExporter



-(BOOL)drawPolyPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(void)drawPolyPageBodyInContext:(struct CGContext *)arg0 scaledClipRect:(struct CGRect )arg1 ;


@end


#endif
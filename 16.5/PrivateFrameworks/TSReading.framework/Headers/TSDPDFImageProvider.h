// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDPDFIMAGEPROVIDER_H
#define TSDPDFIMAGEPROVIDER_H



#import "TSDImageProvider.h"

@interface TSDPDFImageProvider : TSDImageProvider {
    *CGPDFDocument mPDFDocument;
    CGSize mNaturalSize;
}




-(BOOL)hasFlushableContent;
-(BOOL)isValid;
-(NSInteger)pageAngle;
-(struct CGPDFDocument *)CGPDFDocument;
-(struct CGPDFDocument *)p_load;
-(struct CGSize )naturalSize;
-(void)dealloc;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)flush;
-(void)p_loadIfNecessary;


@end


#endif
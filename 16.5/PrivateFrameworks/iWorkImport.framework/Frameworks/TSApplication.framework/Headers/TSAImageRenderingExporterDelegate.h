// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAIMAGERENDERINGEXPORTERDELEGATE_H
#define TSAIMAGERENDERINGEXPORTERDELEGATE_H

@class TSARenderingExporter<TSKImageExporter>, NSURL, NSString;
@protocol TSARenderingExporterDelegate;

#import <Foundation/Foundation.h>


@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate>

 {
    TSARenderingExporter<TSKImageExporter> *mRenderingExporter;
    NSURL *mURL;
}


@property (nonatomic) float compressionFactor; // ivar: mCompressionFactor
@property (nonatomic) NSUInteger height; // ivar: mHeight
@property (retain, nonatomic) NSString *imageType; // ivar: mImageType
@property (nonatomic) BOOL scaleToFit; // ivar: mScaleToFit
@property (nonatomic) NSUInteger width; // ivar: mWidth


-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(CGFloat)viewScale;
-(id)initWithRenderingExporter:(id)arg0 ;
-(struct CGContext *)newCGContextForURL:(id)arg0 ;
-(void)releaseCGContext:(struct CGContext *)arg0 ;
-(void)setup;
-(void)teardown;


@end


#endif
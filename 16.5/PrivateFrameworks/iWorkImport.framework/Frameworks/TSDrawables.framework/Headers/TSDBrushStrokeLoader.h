// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDBRUSHSTROKELOADER_H
#define TSDBRUSHSTROKELOADER_H


#import <Foundation/Foundation.h>


@interface TSDBrushStrokeLoader : NSObject



+(CGFloat)p_brushPixelScaleAt100Percent;
+(id)p_allLoadableBrushStrokeNames;
+(id)p_allStorageCaches;
+(id)p_brushStrokeLoadQueue;
+(id)p_cacheDirectory;
+(id)p_storageCacheForCurrentThread;
+(id)p_storagesByBrushName;
+(id)storageForBrushStrokeNamed:(id)arg0 ;
+(void)backgroundLoadAllBrushStrokes;
+(void)p_clearOnDiskCache;
+(void)p_loadBrushIfNeeded:(id)arg0 ;
+(void)p_loadImageForBrush:(id)arg0 intoStorage:(id)arg1 ;
+(void)p_loadLineEndTextureForBrush:(id)arg0 lineEnd:(id)arg1 path:(struct CGPath *)arg2 andBounds:(struct CGRect )arg3 ;
+(void)p_loadLineEndsForBrush:(id)arg0 fromSVGDoc:(struct _xmlDoc *)arg1 intoStorage:(id)arg2 ;
+(void)p_loadSectionsForBrush:(id)arg0 fromSVGDoc:(struct _xmlDoc *)arg1 intoStorage:(id)arg2 ;


@end


#endif
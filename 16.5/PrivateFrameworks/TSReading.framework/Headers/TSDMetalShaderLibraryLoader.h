// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMETALSHADERLIBRARYLOADER_H
#define TSDMETALSHADERLIBRARYLOADER_H


#import <Foundation/Foundation.h>


@interface TSDMetalShaderLibraryLoader : NSObject



+(id)loadApplicationLibraryWithDevice:(id)arg0 library:(id)arg1 ;
+(id)loadDefaultLibraryWithDevice:(id)arg0 ;
+(id)loadLibraryWithDevice:(id)arg0 path:(id)arg1 ;


@end


#endif
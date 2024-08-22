// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USKRESOURCEPATH_H
#define USKRESOURCEPATH_H


#import <Foundation/Foundation.h>


@interface USKResourcePath : NSObject {
    SdfAssetPath _path;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSdfAssetPath:(struct SdfAssetPath )arg0 ;
-(id)path;
-(id)resolvedPath;
-(struct SdfAssetPath )sdfAssetPath;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TXRASSETCATALOGMIPFILEATTRIBUTES_H
#define TXRASSETCATALOGMIPFILEATTRIBUTES_H



#import "TXRAssetCatalogFileAttributes.h"

@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes {
    NSUInteger _face;
}


@property (nonatomic) NSUInteger face;
@property (nonatomic) NSUInteger level; // ivar: _level


-(BOOL)doesSpecifyAllFaces;
-(id)init;
-(void)specifyAllFaces;


@end


#endif
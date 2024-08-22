// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMEDIAINFO_H
#define TSDMEDIAINFO_H

@class NSString;


#import "TSDStyledInfo.h"

@interface TSDMediaInfo : TSDStyledInfo {
    ? mFlags;
}


@property (readonly, nonatomic) CGSize defaultOriginalSize;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) NSString *mediaDisplayName;
@property (readonly, nonatomic) NSString *mediaFileType;
@property (nonatomic) CGSize originalSize; // ivar: mOriginalSize
@property (readonly, nonatomic) CGSize rawDataSize;
@property (nonatomic) BOOL wasMediaReplaced;


-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(struct CGPoint )centerForReplacingWithNewMedia;
-(void)setGeometry:(id)arg0 ;
-(void)takePropertiesFromReplacedMediaInfo:(id)arg0 ;
-(void)updateGeometryToReplaceMediaInfo:(id)arg0 ;


@end


#endif
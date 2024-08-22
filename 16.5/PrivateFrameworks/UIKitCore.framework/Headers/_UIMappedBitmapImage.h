// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMAPPEDBITMAPIMAGE_H
#define _UIMAPPEDBITMAPIMAGE_H

@class NSData;


#import "UIImage.h"

@interface _UIMappedBitmapImage : UIImage

@property (retain, nonatomic) NSData *data; // ivar: _data


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)_configureImage:(id)arg0 assumePreconfigured:(BOOL)arg1 ;
-(void)_preheatBitmapData;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVMUTABLEMEDIACONTENTTASTEITEM_H
#define SSVMUTABLEMEDIACONTENTTASTEITEM_H

@class NSString;


#import "SSVMediaContentTasteItem.h"

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (nonatomic) NSUInteger contentType;
@property (copy, nonatomic) NSString *playlistGlobalID;
@property (nonatomic) NSInteger storeAdamID;
@property (nonatomic) NSUInteger tasteType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
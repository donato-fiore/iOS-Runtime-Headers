// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPBAPPLAYOUT_H
#define SBPBAPPLAYOUT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SBPBDisplayItem.h"
#import "SBPBDisplayItemLayoutAttributes.h"

@interface SBPBAppLayout : PBCodable <NSCopying>

 {
    NSInteger _preferredDisplayOrdinal;
    CGFloat _relativeHeight;
    CGFloat _relativeWidth;
    int _centerConfiguration;
    SBPBDisplayItem *_centerDisplayItem;
    int _centerDisplayItemRole;
    SBPBDisplayItemLayoutAttributes *_centerLayoutAttributes;
    NSString *_continuousExposeIdentifier;
    NSMutableArray *_displayItemLayoutAttributes;
    NSMutableArray *_displayItems;
    int _environment;
    int _layoutConfiguration;
    SBPBDisplayItem *_primaryDisplayItem;
    SBPBDisplayItemLayoutAttributes *_primaryLayoutAttributes;
    SBPBDisplayItem *_secondaryDisplayItem;
    int _secondaryDisplayItemRole;
    SBPBDisplayItemLayoutAttributes *_secondaryLayoutAttributes;
    BOOL _hidden;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif
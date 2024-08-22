// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLESTYLEPRESET_H
#define TSTTABLESTYLEPRESET_H

@class TSPObject, NSString, NSSet;
@protocol TSSPreset, TSSStyleClient, TSKModel;


#import "TSTTableStyleNetwork.h"

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>

 {
    TSTTableStyleNetwork *_styleNetwork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger presetID;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tableHasStrongOwnership; // ivar: _tableHasStrongOwnership
@property (nonatomic) NSUInteger tempUpgradePresetID; // ivar: _tempUpgradePresetID


+(BOOL)needsObjectUUID;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithStyleNetwork:(id)arg0 ;
-(id)p_documentRoot;
-(id)swatchImage;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
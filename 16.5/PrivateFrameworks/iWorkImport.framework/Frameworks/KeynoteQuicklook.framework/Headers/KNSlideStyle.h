// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNSLIDESTYLE_H
#define KNSLIDESTYLE_H

@class TSSStyle;


#import "KNMotionBackgroundStyle.h"

@interface KNSlideStyle : TSSStyle

@property (readonly, nonatomic) KNMotionBackgroundStyle *motionBackgroundStyle;


+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(void)createStylePresetInStylesheet:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadSlideStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)referencedStyleWasUpdated:(id)arg0 ;
-(void)saveSlideStylePropertyMap:(id)arg0 toArchive:(*void)arg1 archiver:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
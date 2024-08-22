// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TNSHEETSTYLE_H
#define TNSHEETSTYLE_H

@class TSSStyle;



@interface TNSheetStyle : TSSStyle



+(id)defaultSheetStyleWithContext:(id)arg0 ;
+(id)properties;
+(id)sheetStyleIDForPreset:(NSUInteger)arg0 ;
-(NSUInteger)minimumReadVersion;
-(id)backgroundColor;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadSheetStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)saveSheetStylePropertiesToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNCLASSICSTYLESHEETRECORD_H
#define KNCLASSICSTYLESHEETRECORD_H

@class TSPObject, NSString, NSDictionary;
@protocol TSKModel;



@interface KNClassicStylesheetRecord : TSPObject <TSKModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *identifierToStyleMap; // ivar: _identifierToStyleMap
@property (readonly) Class superclass;


-(id)childEnumerator;
-(id)referencedStyles;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
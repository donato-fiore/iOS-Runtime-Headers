// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DFILLSETIDENTIFIER_H
#define TSCH3DFILLSETIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCH3DFillSetIdentifier : NSObject {
    int _seriesIndex;
    int _fillPropertyType;
}


@property (readonly, nonatomic) NSUInteger seriesIndex;
@property (readonly, nonatomic) NSString *textureSetFilename;
@property (readonly, nonatomic) NSString *textureSetID; // ivar: _textureSetID


+(id)identifierWithContentsOfDictionary:(id)arg0 ;
+(id)identifierWithFillName:(id)arg0 seriesName:(id)arg1 textureSetID:(id)arg2 ;
+(id)identifierWithFillPropertyType:(int)arg0 seriesIndex:(NSUInteger)arg1 textureSetID:(id)arg2 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)instanceWithDEPRECATEDArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOnDemandResource;
-(BOOL)isSageCompatible;
-(BOOL)isStoredInLocalBundle;
-(NSUInteger)countOfSeriesInFillSet;
-(NSUInteger)hash;
-(NSUInteger)seriesIndexFromSageSeriesName:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithContentsOfDictionary:(id)arg0 ;
-(id)initWithFillName:(id)arg0 seriesName:(id)arg1 textureSetID:(id)arg2 ;
-(id)initWithFillPropertyType:(int)arg0 seriesIndex:(NSUInteger)arg1 textureSetID:(id)arg2 ;
-(id)loadPropertiesDictionary;
-(id)localDirectoryPath;
-(id)lowResLocalDirectoryPath;
-(id)lowResTextureSetFilename;
-(id)mipmapLocalDirectoryPath;
-(id)mipmapOnDemandResourceTag;
-(id)mipmapTextureSetFilename;
-(id)p_getPlist;
-(id)p_loadPlist;
-(id)p_plistData;
-(id)p_plistPath;
-(id)p_sageFillPropertyNames;
-(id)p_sageFillSetList;
-(id)p_sageSeriesNames;
-(id)p_version;
-(id)sageFillName;
-(id)sageSeriesName;
-(id)textureOnDemandResourceTag;
-(int)fillPropertyTypeFromName:(id)arg0 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif
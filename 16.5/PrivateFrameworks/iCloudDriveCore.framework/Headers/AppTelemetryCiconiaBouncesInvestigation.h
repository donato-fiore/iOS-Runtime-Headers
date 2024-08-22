// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPTELEMETRYCICONIABOUNCESINVESTIGATION_H
#define APPTELEMETRYCICONIABOUNCESINVESTIGATION_H

@class PBCodable;
@protocol NSCopying;



@interface AppTelemetryCiconiaBouncesInvestigation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int aliasToFileCount; // ivar: _aliasToFileCount
@property (nonatomic) int aliasToFolderCount; // ivar: _aliasToFolderCount
@property (nonatomic) int aliasToPackageCount; // ivar: _aliasToPackageCount
@property (nonatomic) int aliasToSymlinkCount; // ivar: _aliasToSymlinkCount
@property (nonatomic) int fileToAliasCount; // ivar: _fileToAliasCount
@property (nonatomic) int fileToFolderCount; // ivar: _fileToFolderCount
@property (nonatomic) int fileToPackageCount; // ivar: _fileToPackageCount
@property (nonatomic) int fileToSymlinkCount; // ivar: _fileToSymlinkCount
@property (nonatomic) int folderToAliasCount; // ivar: _folderToAliasCount
@property (nonatomic) int folderToFileCount; // ivar: _folderToFileCount
@property (nonatomic) int folderToPackageCount; // ivar: _folderToPackageCount
@property (nonatomic) int folderToSymlinkCount; // ivar: _folderToSymlinkCount
@property (nonatomic) BOOL hasAliasToFileCount;
@property (nonatomic) BOOL hasAliasToFolderCount;
@property (nonatomic) BOOL hasAliasToPackageCount;
@property (nonatomic) BOOL hasAliasToSymlinkCount;
@property (nonatomic) BOOL hasFileToAliasCount;
@property (nonatomic) BOOL hasFileToFolderCount;
@property (nonatomic) BOOL hasFileToPackageCount;
@property (nonatomic) BOOL hasFileToSymlinkCount;
@property (nonatomic) BOOL hasFolderToAliasCount;
@property (nonatomic) BOOL hasFolderToFileCount;
@property (nonatomic) BOOL hasFolderToPackageCount;
@property (nonatomic) BOOL hasFolderToSymlinkCount;
@property (nonatomic) BOOL hasNonConflictingKindCount;
@property (nonatomic) BOOL hasPackageToAliasCount;
@property (nonatomic) BOOL hasPackageToFileCount;
@property (nonatomic) BOOL hasPackageToFolderCount;
@property (nonatomic) BOOL hasPackageToSymlinkCount;
@property (nonatomic) BOOL hasSymlinkToAliasCount;
@property (nonatomic) BOOL hasSymlinkToFileCount;
@property (nonatomic) BOOL hasSymlinkToFolderCount;
@property (nonatomic) BOOL hasSymlinkToPackageCount;
@property (nonatomic) int nonConflictingKindCount; // ivar: _nonConflictingKindCount
@property (nonatomic) int packageToAliasCount; // ivar: _packageToAliasCount
@property (nonatomic) int packageToFileCount; // ivar: _packageToFileCount
@property (nonatomic) int packageToFolderCount; // ivar: _packageToFolderCount
@property (nonatomic) int packageToSymlinkCount; // ivar: _packageToSymlinkCount
@property (nonatomic) int symlinkToAliasCount; // ivar: _symlinkToAliasCount
@property (nonatomic) int symlinkToFileCount; // ivar: _symlinkToFileCount
@property (nonatomic) int symlinkToFolderCount; // ivar: _symlinkToFolderCount
@property (nonatomic) int symlinkToPackageCount; // ivar: _symlinkToPackageCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
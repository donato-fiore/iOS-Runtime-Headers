// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPACKAGEITEM_H
#define BRCPACKAGEITEM_H

@class NSString, NSData;
@protocol PQLResultSetInitializer;

#import <Foundation/Foundation.h>

#import "BRCGenerationID.h"

@interface BRCPackageItem : NSObject <PQLResultSetInitializer>

 {
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _isDirty;
}


@property (readonly, nonatomic) NSInteger assetRank; // ivar: _assetRank
@property (readonly, nonatomic) NSData *contentSignature;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fileID; // ivar: _fileID
@property (readonly, nonatomic) BRCGenerationID *generationID; // ivar: _generationID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) NSUInteger itemRowID; // ivar: _itemRowID
@property (readonly, nonatomic) char mode; // ivar: _mode
@property (readonly, nonatomic) NSInteger mtime; // ivar: _mtime
@property (readonly, nonatomic) NSString *pathInPackage; // ivar: _pathInPackage
@property (readonly, nonatomic) NSData *quarantineInfo; // ivar: _quarantineInfo
@property (readonly, nonatomic) NSInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) NSData *xattrSignature; // ivar: _xattrSignature


+(BOOL)dumpSession:(id)arg0 toContext:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateSignaturesForFilesInItem:(id)arg0 fromCKPackage:(id)arg1 error:(*id)arg2 ;
+(NSInteger)largestPackageItemSizeInItemRowID:(NSUInteger)arg0 session:(id)arg1 ;
+(id)packageItemsForFileObjectID:(id)arg0 order:(NSUInteger)arg1 db:(id)arg2 ;
+(id)packageItemsForItem:(id)arg0 order:(NSUInteger)arg1 ;
+(id)packageItemsForItemRowID:(NSUInteger)arg0 order:(NSUInteger)arg1 db:(id)arg2 ;
-(BOOL)saveToDBWithSession:(id)arg0 ;
-(id)initFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)initWithPBItem:(id)arg0 forLocalItem:(id)arg1 ;
-(id)initWithURL:(id)arg0 inPackage:(id)arg1 forItem:(id)arg2 error:(*id)arg3 ;
-(void)_setXattrs:(id)arg0 session:(id)arg1 ;


@end


#endif
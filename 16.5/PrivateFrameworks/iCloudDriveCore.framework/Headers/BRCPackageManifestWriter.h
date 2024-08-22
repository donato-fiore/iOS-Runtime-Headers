// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPACKAGEMANIFESTWRITER_H
#define BRCPACKAGEMANIFESTWRITER_H

@class NSString, PBMessageStreamWriter, NSOutputStream, NSError, NSURL;

#import <Foundation/Foundation.h>

#import "BRCClientZone.h"

@interface BRCPackageManifestWriter : NSObject {
    BRCClientZone *_clientZone;
    NSString *_stageID;
    PBMessageStreamWriter *_writer;
    NSOutputStream *_stream;
}


@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)_packageItem:(id)arg0 matchesMode:(unsigned short)arg1 ;
-(BOOL)_stageExistingPackageItem:(id)arg0 withLiveFd:(int)arg1 stageFd:(int)arg2 isDocumentModifiedByOtherUser:(BOOL)arg3 ;
-(BOOL)addItem:(id)arg0 ;
-(BOOL)addLocalItem:(id)arg0 ;
-(BOOL)done;
-(BOOL)stagePackageWithReader:(id)arg0 package:(id)arg1 xattrsPackage:(id)arg2 stageItemURL:(id)arg3 livefd:(int)arg4 recordName:(id)arg5 isDocumentModifiedByOtherUser:(BOOL)arg6 ;
-(id)initWithZone:(id)arg0 stageID:(id)arg1 url:(id)arg2 ;
-(unsigned short)_computedFileModeForPackageItem:(id)arg0 ;
-(void)_applyDirectoryMetadataWithManifestItem:(id)arg0 packageRootFD:(int)arg1 ;
-(void)_applyFileMetadataWithManifestItem:(id)arg0 isDocumentModifiedByOtherUser:(BOOL)arg1 packageRootFD:(int)arg2 ;
-(void)_applyQuarantineMetadataWithManifestItem:(id)arg0 isDocumentModifiedByOtherUser:(BOOL)arg1 fd:(int)arg2 ;
-(void)_handleStreamError;


@end


#endif
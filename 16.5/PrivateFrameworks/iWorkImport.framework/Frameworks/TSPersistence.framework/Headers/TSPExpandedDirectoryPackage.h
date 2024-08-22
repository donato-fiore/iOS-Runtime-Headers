// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPEXPANDEDDIRECTORYPACKAGE_H
#define TSPEXPANDEDDIRECTORYPACKAGE_H



#import "TSPDirectoryPackage.h"

@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage



+(BOOL)hasZipArchive;
+(BOOL)isValidPackageAtURL:(id)arg0 ;
-(id)newRawReadChannelForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 error:(*id)arg2 ;
-(id)packageEntryInfoForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 ;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg0 forSafeSave:(BOOL)arg1 originalURL:(id)arg2 ;


@end


#endif
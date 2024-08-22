// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHICONSTATEARCHIVER_H
#define SBHICONSTATEARCHIVER_H


#import <Foundation/Foundation.h>


@interface SBHIconStateArchiver : NSObject



+(BOOL)_iconContainsMultipleRepresentations:(id)arg0 ;
+(BOOL)_widgetDataSourceIsSuggestion:(id)arg0 ;
+(id)_folderTypeForFolder:(id)arg0 ;
+(id)_metadataForList:(id)arg0 inModel:(id)arg1 ;
+(id)_nodeAtPath:(id)arg0 inNode:(id)arg1 ;
+(id)_pathForNode:(id)arg0 toIdentifier:(id)arg1 ;
+(id)_representationForApplicationIcon:(id)arg0 inModel:(id)arg1 ;
+(id)_representationForCustomIcon:(id)arg0 inModel:(id)arg1 ;
+(id)_representationForFolder:(id)arg0 inModel:(id)arg1 ;
+(id)_representationForIcon:(id)arg0 inModel:(id)arg1 ;
+(id)_representationForList:(id)arg0 inModel:(id)arg1 ;
+(id)_representationForNode:(id)arg0 inModel:(id)arg1 ;
+(id)_representationsForIcon:(id)arg0 inModel:(id)arg1 ;
+(id)archiveRootFolderInModel:(id)arg0 metadata:(id)arg1 ;
+(id)folderPathForLeafIdentifier:(id)arg0 inArchive:(id)arg1 iconSource:(id)arg2 ;
+(id)iconStateRepresentationForFolder:(id)arg0 inModel:(id)arg1 ;
+(id)indexPathForLeafIdentifier:(id)arg0 inArchive:(id)arg1 ;
+(id)leafIdentifiersFromArchive:(id)arg0 ;
+(id)leafIdentifiersInListAtIndexPath:(id)arg0 inArchive:(id)arg1 ;
+(id)modernizeRootArchive:(id)arg0 ;
+(id)unarchiveRootFolderFromArchive:(id)arg0 withIconSource:(id)arg1 ;
+(void)_addLeafNodesForNode:(id)arg0 toSet:(id)arg1 ;
+(void)_addValuesForCustomIconElement:(id)arg0 toRepresentation:(id)arg1 ;


@end


#endif
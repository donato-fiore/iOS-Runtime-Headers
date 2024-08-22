// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSHAREACCEPTATIONDIRECTORYFAULT_H
#define BRCSHAREACCEPTATIONDIRECTORYFAULT_H

@protocol BRCShareAcceptationFault;


#import "BRCDirectoryItem.h"

@interface BRCShareAcceptationDirectoryFault : BRCDirectoryItem <BRCShareAcceptationFault>





-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)isShareAcceptationFault;
-(id)asShareAcceptationFault;
-(id)initWithFilename:(id)arg0 itemID:(id)arg1 parentIDWhenSubitem:(id)arg2 appLibrary:(id)arg3 clientZone:(id)arg4 sharingOptions:(NSUInteger)arg5 ;
-(void)deleteShareAcceptationFault;
-(void)markNeedsTransformIntoNormalFault;


@end


#endif
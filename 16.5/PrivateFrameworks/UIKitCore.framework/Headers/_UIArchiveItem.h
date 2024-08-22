// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIARCHIVEITEM_H
#define _UIARCHIVEITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIArchiveItem : NSObject

@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (nonatomic) BOOL fileSizeIsSet; // ivar: _fileSizeIsSet
@property (retain, nonatomic) NSString *fileType; // ivar: _fileType
@property (nonatomic) BOOL isAppleDoubleFile; // ivar: _isAppleDoubleFile
@property (retain, nonatomic) NSString *pathInArchive; // ivar: _pathInArchive
@property (retain, nonatomic) NSString *pathToAppleDoubleRealFileCounterpart; // ivar: _pathToAppleDoubleRealFileCounterpart


-(id)description;


@end


#endif
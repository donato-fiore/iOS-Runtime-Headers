// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDATTRIBUTION_H
#define TSDATTRIBUTION_H

@class TSKSosBase, NSString, NSURL;
@protocol NSCopying;



@interface TSDAttribution : TSKSosBase <NSCopying>

 {
    NSString *_externalURLString;
    NSString *_authorURLString;
    BOOL _definedTitle;
    BOOL _definedDescriptionText;
    BOOL _definedExternalURLString;
    BOOL _definedAuthorName;
    BOOL _definedAuthorURLString;
}


@property (readonly, nonatomic) NSString *authorName; // ivar: _authorName
@property (readonly, nonatomic) NSURL *authorURL;
@property (readonly, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, nonatomic) NSURL *externalURL;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithTitle:(id)arg0 descriptionText:(id)arg1 externalURL:(id)arg2 authorName:(id)arg3 authorURL:(id)arg4 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif
/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemSource.h>

@class ICNote, NSString;

@interface ICNoteTopoTextActivityItemSource : NSObject <UIActivityItemSource> {

	ICNote* _note;

}

@property (nonatomic,retain) ICNote * note;                         //@synthesize note=_note - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(ICNote *)note;
-(void)setNote:(ICNote *)arg1 ;
-(id)initWithNote:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalReminderMigrationDefaultsProvider.h>

@class NSString;

@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBackupBeforeMigration; 
@property (assign,nonatomic) BOOL havePerformedReminderMigrationCleanup; 
+(id)sharedInstance;
-(BOOL)havePerformedReminderMigrationCleanup;
-(BOOL)shouldBackupBeforeMigration;
-(void)setHavePerformedReminderMigrationCleanup:(BOOL)arg1 ;
@end

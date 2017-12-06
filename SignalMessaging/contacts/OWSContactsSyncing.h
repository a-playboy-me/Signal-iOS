//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class OWSContactsManager;
@class OWSIdentityManager;
@class OWSMessageSender;
@class OWSProfileManager;

@interface OWSContactsSyncing : NSObject

- (instancetype)initWithContactsManager:(OWSContactsManager *)contactsManager
                        identityManager:(OWSIdentityManager *)identityManager
                          messageSender:(OWSMessageSender *)messageSender
                         profileManager:(OWSProfileManager *)profileManager;

@end

NS_ASSUME_NONNULL_END
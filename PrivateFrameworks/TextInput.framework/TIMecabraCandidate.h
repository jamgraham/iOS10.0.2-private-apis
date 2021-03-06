/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIMecabraCandidate : TIKeyboardCandidate {
    NSString * _candidate;
    long long  _cursorMovement;
    unsigned long long  _deleteCount;
    bool  _emojiCandidate;
    bool  _extensionCandidate;
    NSString * _input;
    bool  _isAutocorrection;
    bool  _isForShortcutConversion;
    NSNumber * _mecabraCandidatePointerValue;
}

@property (nonatomic, retain) NSNumber *mecabraCandidatePointerValue;

+ (bool)supportsSecureCoding;
+ (int)type;

- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (void)dealloc;
- (unsigned long long)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(bool)arg4 isEmoji:(bool)arg5 isShortcut:(bool)arg6 isAutocorrection:(bool)arg7;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(bool)arg4 isEmoji:(bool)arg5 isShortcut:(bool)arg6 isAutocorrection:(bool)arg7 deleteCount:(unsigned long long)arg8;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(bool)arg4 isEmoji:(bool)arg5 isShortcut:(bool)arg6 isAutocorrection:(bool)arg7 deleteCount:(unsigned long long)arg8 cursorMovement:(long long)arg9;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(bool)arg4;
- (id)input;
- (bool)isAutocorrection;
- (bool)isEmojiCandidate;
- (bool)isExtensionCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (id)label;
- (id)mecabraCandidatePointerValue;
- (void)setMecabraCandidatePointerValue:(id)arg1;

@end
